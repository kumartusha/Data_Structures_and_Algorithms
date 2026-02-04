import json
import pyaudio
from vosk import Model, KaldiRecognizer

MODEL_PATH = "/Users/apple/Downloads/vosk-model-small-en-us-0.15"  # change this

model = Model(MODEL_PATH)
recognizer = KaldiRecognizer(model, 16000)

p = pyaudio.PyAudio()
stream = p.open(
    format=pyaudio.paInt16,
    channels=1,
    rate=16000,
    input=True,
    frames_per_buffer=4096
)

stream.start_stream()
print("🎤 Speak now (Ctrl+C to stop)\n")

try:
    while True:
        data = stream.read(4096, exception_on_overflow=False)

        if recognizer.AcceptWaveform(data):
            result = json.loads(recognizer.Result())
            print("📝", result["text"])
        else:
            partial = json.loads(recognizer.PartialResult())
            print("⌛", partial["partial"], end="\r")

except KeyboardInterrupt:
    print("\n🛑 Stopped")

stream.stop_stream()
stream.close()
p.terminate()
