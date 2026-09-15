#include <iostream>
#include <vector>
using namespace std;
int main() {
int score, total = 0;
int passed = 0;
int highest;
vector<int> scores;
// Nilai 1
cin >> score;
scores.push_back(score);
total += score;
if (score >= 60) passed++;
highest = score;
// Nilai 2
cin >> score;
scores.push_back(score);
total += score;
if (score >= 60) passed++;
if (score > highest) highest = score;
// Nilai 3
cin >> score;
scores.push_back(score);
total += score;
if (score >= 60) passed++;
if (score > highest) highest = score;
// Nilai 4
cin >> score;
scores.push_back(score);
total += score;
if (score >= 60) passed++;
if (score > highest) highest = score;
// Nilai 5
cin >> score;
scores.push_back(score);
total += score;
if (score >= 60) passed++;
if (score > highest) highest = score;
double average = (double) total / scores.size();
cout << "Total : " << total << endl;
cout << "Rata-rata : " << average << endl;
cout << "Tertinggi : " << highest << endl;
cout << "Lulus : " << passed << endl;
return 0;
}
