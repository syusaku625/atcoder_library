vector<pair<ll, ll> > prime_factorize(ll N) {
    vector<pair<ll, ll> > res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.PB({N, 1});
    return res;
}

int main() {
    ll N;
    cin >> N;
    const auto &res = prime_factorize(N);
    cout << N << ":";
    for (auto p : res) {
        for (int i = 0; i < p.second; ++i) cout << " " << p.first;
    }
    cout << endl;
}