bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}
ll binary_search(ll key vector<ll> a){
    ll left=-1;
    ll right=a.size();
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }
    return right;
}