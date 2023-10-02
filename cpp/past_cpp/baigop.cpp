#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

// Some needed non-main functions
void toLowerString(string& s) {
    for (char& c : s) {
        c = tolower(c);
    }
}

vector<vector<int64_t>> transpose(vector<vector<int64_t>>& mat) {
    vector<vector<int64_t>> res(mat.size(), vector<int64_t>(mat[0].size()));
    for (int64_t r = 0; r < mat.size(); r++) {
        for (int64_t c = 0; c < mat.size(); c++) {
            res[c][r] = mat[r][c];
        }
    }

    return res;
}

bool isPrime(int64_t n) {
    if (n <= 1) { return false; }
    for (int64_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int64_t gcd(int64_t a, int64_t b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int64_t temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int64_t divisorSum(int64_t n) {
    int64_t ans = 0;
    for (int64_t i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i) {
                ans += i;
            }
            else {
                ans += i + n / i;
            }
        }
    }

    return ans;
}

// Defining all bài:
void Bai1(); void Bai2(); void Bai3();
void Bai4(); void Bai5(); void Bai6();
void Bai7(); void Bai8(); void Bai9();
void Bai10(); void Bai11(); void Bai12();
void Bai13(); void Bai14(); void Bai15();
void Bai16(); void Bai17(); void Bai18();
void Bai19(); void Bai20(); void Bai21();
void Bai22(); void Bai23(); void Bai24();
void Bai25(); void Bai26(); void Bai27();
void Bai28(); void Bai29(); void Bai30();
void Bai31(); void Bai32(); void Bai33();
void Bai34(); void Bai35(); void Bai36();
void Bai37(); void Bai38(); void Bai39();
void Bai40(); void Bai41(); void Bai42();
void Bai43(); void Bai44(); void Bai45();
void Bai46(); void Bai47(); void Bai48();
void Bai49(); void Bai50(); void Bai51();
void Bai52(); void Bai53(); void Bai54();
void Bai55(); void Bai56(); void Bai57();
void Bai58(); void Bai59(); void Bai60();
void Bai61(); void Bai62(); void Bai63();
void Bai64(); void Bai65(); void Bai66();
void Bai67();

// Main function
int main() {
    int input; cin >> input;

    switch (input) {
        case 1: Bai1(); break; case 2: Bai2(); break; case 3: Bai3(); break;
        case 4: Bai4(); break; case 5: Bai5(); break; case 6: Bai6(); break;
        case 7: Bai7(); break; case 8: Bai8(); break; case 9: Bai9(); break;
        case 10: Bai10(); break; case 11: Bai11(); break; case 12: Bai12(); break;
        case 13: Bai13(); break; case 14: Bai14(); break; case 15: Bai15(); break;
        case 16: Bai16(); break; case 17: Bai17(); break; case 18: Bai18(); break;
        case 19: Bai19(); break; case 20: Bai20(); break; case 21: Bai21(); break;
        case 22: Bai22(); break; case 23: Bai23(); break; case 24: Bai24(); break;
        case 25: Bai25(); break; case 26: Bai26(); break; case 27: Bai27(); break;
        case 28: Bai28(); break; case 29: Bai29(); break; case 30: Bai30(); break;
        case 31: Bai31(); break; case 32: Bai32(); break; case 33: Bai33(); break;
        case 34: Bai34(); break; case 35: Bai35(); break; case 36: Bai36(); break;
        case 37: Bai37(); break; case 38: Bai38(); break; case 39: Bai39(); break;
        case 40: Bai40(); break; case 41: Bai41(); break; case 42: Bai42(); break;
        case 43: Bai43(); break; case 44: Bai44(); break; case 45: Bai45(); break;
        case 46: Bai46(); break; case 47: Bai47(); break; case 48: Bai48(); break;
        case 49: Bai49(); break; case 50: Bai50(); break; case 51: Bai51(); break;
        case 52: Bai52(); break; case 53: Bai53(); break; case 54: Bai54(); break;
        case 55: Bai55(); break; case 56: Bai56(); break; case 57: Bai57(); break;
        case 58: Bai58(); break; case 59: Bai59(); break; case 60: Bai60(); break;
        case 61: Bai61(); break; case 62: Bai62(); break; case 63: Bai63(); break;
        case 64: Bai64(); break; case 65: Bai65(); break; case 66: Bai66(); break;
        case 67: Bai67(); break;
    }
}

// All bài

void Bai1() {
    cout << "Hello World @ Code Online";
}

void Bai2() {
    int64_t a, b;
    cin >> a >> b;
    cout << a + b;
}

void Bai3() {
    int64_t a, b;
    cin >> a >> b;
    cout << a + b << " " << a - b << '\n';
    cout << a * b << " " << fixed << setprecision(2) << (double)a / b;
}

void Bai4() {
    int a; cin >> a;
    cout << a * a << " " << a * a * a << " " << a * a * a * a;
}

void Bai5() {
    int a; cin >> a;
    cout << a * a << " " << a * a * a << " " << a * a * a * a;
}

void Bai6() {
    int64_t a, b; cin >> a >> b;
    cout << 2 * (a + b) << " " << a * b;
}

void Bai7() {
    int64_t a; cin >> a;
    const double pi = 3.14;
    cout << fixed << setprecision(2) << 4 * pi * (a * a) << " " << ((4 * pi) / 3) * (a * a * a);
}

void Bai8() {
    string d, m, y;
    cin >> d >> m >> y;

    d = string((2 >= d.size() ? 2 - d.size() : 0), '0') + d;
    m = string((2 >= m.size() ? 2 - m.size() : 0), '0') + m;
    y = string((4 >= y.size() ? 4 - y.size() : 0), '0') + y;

    cout << d << '/' << m << '/' << y;
}

void Bai9() {
    int64_t h, m, s;
    cin >> s;

    h = s / 3600;
    s -= h * 3600;

    m = s / 60;
    s -= m * 60;

    string res = "";
    for (int64_t num : {h, m, s}) {
        if (num < 10) {
            res += '0';
        }
        res += to_string(num);
        res += ":";
    }

    res.pop_back();
    cout << res;
}

void Bai10() {
    int64_t a, b;
    cin >> a >> b;
    cout << max(a, b);
}

void Bai11() {
    int64_t a, b, c;
    cin >> a >> b >> c;
    cout << max({ a,b,c });
}

void Bai12() {
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max({ a,b,c,d });
}

void Bai13() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0) {
        if (c == 0) { cout << "VSN"; }
        else { cout << "VN"; }
        return ;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "VN";
        return ;
    }

    if (delta == 0) {
        cout << "x = 2.00";
        return ;
    }

    double x1 = (-b + sqrt(delta)) / 2 * a;
    double x2 = (-b - sqrt(delta)) / 2 * a;

    cout << fixed << setprecision(2) << x2 << " " << x1;
}

void Bai14() {
    int64_t a, b, c;
    cin >> a >> b >> c;

    if (!((a + b > c) && (b + c > a) && (a + c > b))) {
        cout << "NO";
        return;
    }

    double p = (a + b + c) / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << S;
}

void Bai15() {
    vector<int> daysOf = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int month; cin >> month;

    if (month < 1 || month > 12) {
        cout << "NOT FOUND";
    }
    else {
        cout << daysOf[month];
    }
}

void Bai16() {
    int64_t mins; cin >> mins;

    int64_t ans = 25000;
    ans += 600 * min((int64_t)50, mins);
    mins -= min((int64_t)50, mins);

    ans += 400 * min((int64_t)150, mins);
    mins -= min((int64_t)150, mins);

    ans += 200 * mins;

    cout << "So tien = " << ans;
}

void Bai17() {
    int64_t n; cin >> n;
    for (int64_t i = 1; i <= n; i++) {
        cout << i << " ";
    }
}

void Bai18() {
    int64_t n; cin >> n;
    cout << n * (n + 1) / 2;
}

void Bai19() {
    int64_t n; cin >> n;
    string s; cin >> s;

    for (int64_t i = 0; i < n; i++) {
        cout << s << '\n';
    }
}

void Bai20() {
    int64_t n; cin >> n;
    int64_t ans = 1;

    for (int64_t i = 1; i <= n; i++) {
        ans *= i;
    }

    cout << ans;
}

void Bai21() {
    int64_t n; cin >> n;
    double ans = 0;

    for (int64_t i = 1; i <= n; i++) {
        ans += 1.0 / i;
    }

    cout << fixed << setprecision(6) << ans;
}

void Bai22() {
    int64_t height, width;
    cin >> height >> width;

    for (int64_t i = 0; i < height; i++) {
        for (int64_t j = 0; j < width; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void Bai23() {
    int64_t n; cin >> n;
    for (int64_t i = n; i >= 1; i--) {
        for (int64_t j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void Bai24() {
    int64_t height, width;
    cin >> height >> width;

    height -= 2;
    cout << string(width, '*') << '\n';
    for (int64_t i = 0; i < height; i++) {
        cout << '*' << string(width - 2, ' ') << '*';
        cout << '\n';
    }

    cout << string(width, '*');
}

void Bai25() {
    int64_t n; cin >> n;
    if (n <= 1) {
        cout << "FALSE";
        return;
    }

    for (int64_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "FALSE";
            return;
        }
    }

    cout << "TRUE";
}

void Bai26() {
    int64_t n; cin >> n;
    cout << (divisorSum(n) == 2 * n ? "TRUE" : "FALSE");
}

void Bai27() {
    int n; cin >> n;

    int64_t f1 = 1;
    int64_t f2 = 1;

    for (int i = 0; i < n - 2; i++) {
        int64_t f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    cout << f2;
}

void Bai28() {
    string n; cin >> n;
    reverse(n.begin(), n.end());
    cout << n;
}

void Bai29() {
    string n; cin >> n;
    char maxChar = '0';

    for (char c : n) {
        maxChar = max(maxChar, c);
    }

    cout << maxChar;
}

void Bai30() {
    int64_t n; cin >> n;

    string nString = to_string(n);
    reverse(nString.begin(), nString.end());

    cout << n + stoll(nString);
}

void Bai31() {
    int64_t n; cin >> n;
    string res = "";

    for (int64_t i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            res += to_string(i);
            res += "*";
            n /= i;
        }
    }

    if (n > 2) {
        res += to_string(n) + "*";
    }

    res.pop_back();
    cout << res;
}

void Bai32() {
    int64_t a, b;
    cin >> a >> b;

    int64_t theGCD = gcd(a, b);
    cout << theGCD << " " << (a * b) / theGCD;
}

void Bai33() {
    int64_t theMax = -9223372036854775807 - 1;
    int64_t theMin = 9223372036854775807;

    int64_t n;
    int64_t cnt = 0;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        theMax = max(theMax, n);
        theMin = min(theMin, n);
        cnt++;
    }

    cout << theMax << " " << theMin << " " << cnt;
}

void Bai34() {
    int64_t k; cin >> k;

    vector<bool> isPrime(k + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    int64_t ans = 0;
    for (int64_t i = 2; i < k; i++) {
        if (isPrime[i]) {
            ans++;
            cout << i << " ";
            for (int64_t j = i; j < k; j += i) {
                isPrime[j] = false;
            }
        }
    }

    if (ans == 0) {
        cout << "NOT FOUND";
    }
}

void Bai35() {
    int64_t k; cin >> k;

    vector<bool> isPrime(k + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    int64_t sumOfPrimes = 0;

    int64_t primeCount = 0;
    for (int64_t i = 2; i <= k; i++) {
        if (isPrime[i]) {
            primeCount++;
            sumOfPrimes += i;
            for (int64_t j = i; j <= k; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << fixed << setprecision(3) << (sumOfPrimes * 1.0) / primeCount;
}

void Bai36() {
    int64_t k; cin >> k;
    int64_t primeCount = 0;
    int64_t curPrime = 1;

    while (primeCount < k) {
        for (int64_t i = curPrime + 1; ; i++) {
            if (isPrime(i)) {
                curPrime = i;
                cout << i << " ";
                primeCount++;
                break;
            }
        }
    }
}

void Bai37() {
    int n; cin >> n;
    int theMax; cin >> theMax;
    int theMin = theMax;

    n--;

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        theMax = max(theMax, temp);
        theMin = min(theMin, temp);
    }

    cout << theMax << " " << theMin;
}

void Bai38() {
    int n; cin >> n;
    vector<int> input(n);

    for (int& num : input) {
        cin >> num;
    }

    int theMax = *max_element(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == theMax) {
            cout << (i + 1) << " ";
        }
    }
}

void Bai39() {
    double sum = 0;
    int elementCount; cin >> elementCount;

    for (int i = 0; i < elementCount; i++) {
        int theNum; cin >> theNum;
        sum += theNum;
    }

    cout << fixed << setprecision(2) << sum / elementCount;
}

void Bai40() {
    int64_t n; cin >> n;
    vector<int> input(n);
    for (int& num : input) {
        cin >> num;
    }

    double average = (1.0 * accumulate(input.begin(), input.end(), 0)) / n;
    for (int i = 0; i < n; i++) {
        if (input[i] > average) {
            cout << i + 1 << " ";
        }
    }
}

void Bai41() {
    int64_t n; cin >> n;
    vector<bool> isPrime(n + 1, true);
    vector<int64_t> input(n);

    for (int64_t& num : input) {
        cin >> num;
    }

    int64_t theMax = *max_element(input.begin(), input.end());
    isPrime[0] = false;
    isPrime[1] = false;
    for (int64_t i = 2; i <= theMax; i++) {
        if (isPrime[i] == false) { continue; }
        for (int64_t j = 2 * i; j <= theMax; j += i) {
            isPrime[j] = false;
        }
    }

    for (int64_t i = 0; i < n; i++) {
        if (isPrime[input[i]]) {
            cout << input[i] << " ";
        }
    }
}

void Bai42() {
    int64_t n; cin >> n;
    vector<bool> isPrime(n + 1, true);
    vector<int64_t> input(n);

    for (int64_t& num : input) {
        cin >> num;
    }

    int64_t theMax = *max_element(input.begin(), input.end());
    isPrime[0] = false;
    isPrime[1] = false;
    for (int64_t i = 2; i <= theMax; i++) {
        if (isPrime[i] == false) { continue; }
        for (int64_t j = 2 * i; j <= theMax; j += i) {
            isPrime[j] = false;
        }
    }

    double sum = 0;
    int primeCount = 0;
    for (int64_t i = 0; i < n; i++) {
        if (isPrime[input[i]]) {
            sum += input[i];
            primeCount++;
        }
    }

    if (primeCount == 0) {
        cout << "NOT FOUND";
    }
    else {
        cout << fixed << setprecision(2) << sum / primeCount;
    }
}

void Bai43() {
    int64_t n; cin >> n;
    bool foundOne = false;
    for (size_t i = 0; i < n; i++) {
        int64_t theNum; cin >> theNum;
        if (sqrt(theNum) == (int64_t)sqrt(theNum)) {
            foundOne = true;
            cout << theNum << " ";
        }
    }

    if (!foundOne) {
        cout << "NOT FOUND";
    }
}

void Bai44() {
    int64_t n; cin >> n;

    int64_t theMax;
    while (n > 0) {
        n--;
        int64_t theNum; cin >> theNum;
        if (theNum < 0) {
            theMax = theNum;
            break;
        }
    }

    while (n > 0) {
        n--;
        int64_t theNum; cin >> theNum;
        if (theNum < 0) {
            theMax = max(theMax, theNum);
        }
    }

    cout << theMax;
}

void Bai45() {
    int64_t n; cin >> n;
    string positives = "";
    string negatives = "";

    while (n > 0) {
        n--;
        int64_t theNum; cin >> theNum;

        if (theNum < 0) {
            negatives += to_string(theNum) + " ";
        }
        else {
            positives += to_string(theNum) + " ";
        }
    }

    if (positives.size() == 0) {
        cout << "NOT FOUND";
    }
    else {
        cout << positives;
    }

    cout << '\n';

    if (negatives.size() == 0) {
        cout << "NOT FOUND";
    }
    else {
        cout << negatives;
    }
}

void Bai46() {
    int64_t n; cin >> n;
    vector<int64_t> input(n);
    for (int64_t& num : input) {
        cin >> num;
    }

    sort(input.begin(), input.end());

    for (int64_t i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    cout << '\n';

    for (int64_t i = n - 1; i >= 0; i--) {
        cout << input[i] << " ";
    }
}

void Bai47() {
    int64_t n; cin >> n;
    vector<int64_t> input(n);
    for (int64_t& num : input) {
        cin >> num;
    }

    sort(input.begin(), input.end(), greater<int>());
    cout << input[0] << " " << input[1] << " " << input[2];
}

void Bai48() {
    int64_t n; cin >> n;
    map<int64_t, int64_t> m;

    while (n > 0) {
        n--;
        int64_t theNum; cin >> theNum;
        m[theNum]++;
    }

    cout << m.size() << '\n';
    for (auto& item : m) {
        cout << item.first << " " << item.second << '\n';
    }
}

void Bai49() {
    int64_t n; cin >> n;
    map<int64_t, int64_t> m;
    vector<int64_t> input; input.reserve(n);

    while (n > 0) {
        n--;

        int64_t theNum; cin >> theNum;
        input.push_back(theNum);
        m[theNum]++;
    }

    cout << m.size() << '\n';
    unordered_set<int64_t> printed;
    for (auto num : input) {
        if (printed.find(num) == printed.end()) {
            printed.insert(num);
            cout << num << " " << m[num] << '\n';
        }
    }
}

void Bai50() {
    int64_t n; cin >> n;
    unordered_map<int64_t, int64_t> m;
    vector<int64_t> input(n);

    int64_t maxFrequency = 0;
    for (int64_t& num : input) {
        cin >> num;
        m[num]++;
        maxFrequency = max(maxFrequency, m[num]);
    }

    for (int64_t i = 0; i < n; i++) {
        if (m[input[i]] == maxFrequency) {
            cout << input[i] << ' ' << maxFrequency;
            return;
        }
    }
}

void Bai51() {
    int64_t n; cin >> n;
    if (n == 0) { return; }

    int64_t curNum; cin >> curNum;
    n--;

    for (int64_t i = 0; i < n; i++) {
        int64_t nextNum; cin >> nextNum;
        if (nextNum <= curNum) {
            cout << "FALSE";
            return;
        }

        curNum = nextNum;
    }

    cout << "TRUE";
}

void Bai52() {
    int64_t n; cin >> n;
    if (n == 0) { return; }
    vector<int64_t> input(n);

    for (int64_t& num : input) {
        cin >> num;
    }

    int L = 0;
    int R = n - 1;

    while (L <= R) {
        if (input[L] != input[R]) {
            cout << "FALSE";
        }

        L++;
        R--;
    }

    cout << "TRUE";
}

void Bai53() {
    int64_t n; cin >> n;
    string res = "";
    while (n > 0) {
        res += to_string(n % 2);
        n /= 2;
    }

    reverse(res.begin(), res.end());
    cout << res;
}

void Bai54() {
    int64_t rows, cols; cin >> rows >> cols;

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            int64_t theNum; cin >> theNum;
            cout << theNum << ' ';
        }
        cout << '\n';
    }
}

void Bai55() {
    int64_t rows, cols; cin >> rows >> cols;
    vector<vector<int64_t>> input(rows, vector<int64_t>(cols));

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cin >> input[r][c];
        }
    }

    for (int64_t r = 0; r < rows; r++) {
        int64_t cSum = 0;
        for (int64_t c = 0; c < cols; c++) {
            cSum += input[r][c];
        }

        cout << cSum << ' ';
    }

    cout << '\n';

    for (int64_t c = 0; c < cols; c++) {
        int64_t cSum = 0;
        for (int64_t r = 0; r < rows; r++) {
            cSum += input[r][c];
        }

        cout << cSum << ' ';
    }
}

void Bai56() {
    int64_t rows, cols; cin >> rows >> cols;
    vector<vector<int64_t>> input(rows, vector<int64_t>(cols));

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cin >> input[r][c];
        }
    }

    for (int64_t c = 0; c < cols; c++) {
        for (int64_t r = 0; r < rows; r++) {
            cout << input[r][c] << ' ';
        }
        cout << '\n';
    }
}

void Bai57() {
    int64_t rows, cols; cin >> rows;
    cols = rows;
    vector<vector<int64_t>> input(rows, vector<int64_t>(cols));

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cin >> input[r][c];
        }
    }

    if (input == transpose(input)) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
}

void Bai58() {
    int64_t rows, cols; cin >> rows;
    cols = rows;
    vector<vector<int64_t>> input(rows, vector<int64_t>(cols));

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cin >> input[r][c];
        }
    }

    int64_t sum = 0;
    double count = 0;
    for (int64_t i = 0; i < rows && i < cols; i++) {
        sum += input[i][i];
        count++;
    }

    cout << fixed << setprecision(2) << sum / count;
}

void Bai59() {
    int64_t rows, cols; cin >> rows >> cols;
    vector<vector<int64_t>> input(rows, vector<int64_t>(cols));

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cin >> input[r][c];
        }
    }

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            int64_t theNum; cin >> theNum;
            input[r][c] += theNum;
        }
    }

    for (int64_t r = 0; r < rows; r++) {
        for (int64_t c = 0; c < cols; c++) {
            cout << input[r][c] << ' ';
        }
        cout << '\n';
    }
}

void Bai60() {
    string s; cin >> s;
    cout << "I love " << s << '!';
}

void Bai61() {
    int64_t ans = 1;
    string s; getline(cin, s);

    for (int64_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            ans++;
        }
    }

    cout << ans;
}

void Bai62() {
    string s; cin >> s;
    string t = "";

    vector<string> splits;
    for (char c : s) {
        if (c == '/') {
            splits.push_back(t);
            t = "";
        }
        else {
            t += c;
        }
    }

    splits.push_back(t);

    vector<bool> indexGoDie(splits.size(), false);
    for (int i = 0; i < splits.size(); i++) {
        if (splits[i] == "") {
            indexGoDie[i] = true;
        }
    }

    string res = "";
    for (int i = 0; i < splits.size(); i++) {
        if (!indexGoDie[i]) {
            res += splits[i] + "/";
        }
    }
    res.pop_back();

    cout << res;
}

void Bai63() {
    string s; cin >> s;
    for (char c : s) {
        if (!isdigit(c)) {
            cout << "FALSE";
            return;
        }
    }

    cout << "TRUE";
}

void Bai64() {
    string s; getline(cin, s);
    string t = "";

    for (char c : s) {
        if (c == '.' || c == '!' || c == '?') {
            for (char& letter : t) {
                letter = tolower(letter);
            }
            t[0] = toupper(t[0]);
            cout << t << c;
            t = "";

        }
        else {
            t += c;
        }
    }

    for (char& letter : t) {
        letter = tolower(letter);
    }
    t[0] = toupper(t[0]);
    cout << t;
}

void Bai65() {
    string s; getline(cin, s);
    string t = "";
    for (int64_t i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ' ') { break; }
        t += s[i];
    }

    reverse(t.begin(), t.end());
    cout << t;
}

void Bai66() {
    string s; getline(cin, s);
    char a; cin >> a;

    int counter = 0;
    for (char c : s) {
        if (c == a) {
            counter++;
        }
    }

    cout << counter;
}

void Bai67() {
    string s; getline(cin, s);
    string t; cin >> t;
    int64_t curP = 0;
    int64_t ans = 0;

    toLowerString(s);
    toLowerString(t);

    while (true) {
        auto pos = s.find(t, curP);
        if (pos == string::npos) {
            break;
        }
        else {
            curP = pos + t.size();
            ans++;
        }
    }

    cout << ans;

}
