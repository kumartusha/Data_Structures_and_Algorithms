#include <bits/stdc++.h>
using namespace std;

// // #include <iostream>
// // #include <vector>
// // #include <cmath>
// // #include <algorithm>

// // using namespace std;

// // double polygonArea(const vector<pair<int, int>>& coords) {
// //     double area = 0;
// //     int n = coords.size();

// //     for (int i = 0; i < n; ++i) {
// //         int j = (i + 1) % n;
// //         area += coords[i].first * coords[j].second;
// //         area -= coords[i].second * coords[j].first;
// //     }

// //     return fabs(area) / 2.0;
// // }

// // int minBrushPresses(const vector<pair<int, int>>& coords, int M) {
// //     double area = polygonArea(coords);

// //     double brushArea = M * M;

// //     return ceil(area / brushArea);
// // }

// // int main() {
// //     int N;
// //     cin >> N;

// //     vector<pair<int, int>> coords(N);
// //     for (int i = 0; i < N; ++i) {
// //         cin >> coords[i].first >> coords[i].second;
// //     }

// //     int M;
// //     cin >> M;

// //     int result = minBrushPresses(coords, M);

// //     cout << result << endl;

// //     return 0;
// // }

// #include <iostream>
// #include <cmath>
// #include <vector>
// #include <set>
// #include <iomanip>
// #include <algorithm>

// using namespace std;

// // Function to reflect a point across a line
// pair<double, double> reflectPoint(pair<double, double> p, pair<double, double> lineStart, pair<double, double> lineEnd) {
//     double x1 = lineStart.first, y1 = lineStart.second;
//     double x2 = lineEnd.first, y2 = lineEnd.second;
//     double px = p.first, py = p.second;

//     // Line equation constants
//     double A = y2 - y1;
//     double B = x1 - x2;
//     double C = x2 * y1 - x1 * y2;

//     // Reflection formula
//     double d = A * px + B * py + C;
//     double den = A * A + B * B;
//     double rx = px - 2 * A * d / den;
//     double ry = py - 2 * B * d / den;

//     return {round(rx * 100) / 100.0, round(ry * 100) / 100.0};
// }

// // Function to calculate the resulting points after folding
// vector<pair<double, double>> foldedPolygon(int area, pair<double, double> lineStart, pair<double, double> lineEnd) {
//     // Calculate square corners based on the area
//     int side = sqrt(area);
//     vector<pair<double, double>> corners = {{0, 0}, {0, side}, {side, side}, {side, 0}};
//     vector<pair<double, double>> reflectedCorners;

//     // Reflect points on the left side of the folding line
//     for (auto point : corners) {
//         double x1 = lineStart.first, y1 = lineStart.second;
//         double x2 = lineEnd.first, y2 = lineEnd.second;
//         double px = point.first, py = point.second;

//         // Determine if the point is on the left side of the line
//         double position = (x2 - x1) * (py - y1) - (y2 - y1) * (px - x1);
//         if (position > 0) { // Point is on the left side
//             reflectedCorners.push_back(reflectPoint(point, lineStart, lineEnd));
//         }
//     }

//     // Combine original and reflected points
//     corners.insert(corners.end(), reflectedCorners.begin(), reflectedCorners.end());

//     // Remove duplicates using a set
//     set<pair<double, double>> uniqueCorners(corners.begin(), corners.end());
//     vector<pair<double, double>> result(uniqueCorners.begin(), uniqueCorners.end());

//     // Sort the result based on coordinates
//     sort(result.begin(), result.end(), [](pair<double, double> a, pair<double, double> b) {
//         return (a.first < b.first) || (a.first == b.first && a.second < b.second);
//     });

//     return result;
// }

// // Main function
// int main() {
//     int area;
//     cout << "Enter the area of the square: ";
//     cin >> area;

//     cout << "Enter the coordinates of the folding line (x1, y1, x2, y2): ";
//     double x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;
//     pair<double, double> lineStart = {x1, y1};
//     pair<double, double> lineEnd = {x2, y2};

//     vector<pair<double, double>> result = foldedPolygon(area, lineStart, lineEnd);

//     // Output the resulting points
//     cout << "Resulting points after folding:\n";
//     for (auto point : result) {
//         cout << fixed << setprecision(2) << point.first << " " << point.second << "\n";
//     }

//     return 0;
// }

// int chr = 64;

// int main()
// {

//     for (int i = 1; i <= 5; ++i)
//     {
//           chr += 1;
//         for (int j = 1; j <= 5; ++j)
//         {
//             if (i >= j)
//             {
//                 cout << char(chr) << " ";
//             }
//             else
//             {
//                 cout << " " << " ";
//             }
//         }
//         cout<<endl;
//     }
// }
