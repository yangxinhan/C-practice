while True:
    try:
        n = int(input())
        print((n ** 3 + 5 * n + 6) // 6)
    except:
        break



# #include <iostream>
# using namespace std;

# int main() {
#     int n;

#     while (cin >> n) {
#         if (cin.get() != EOF) {
#             cout << (n * n * n + 5 * n + 6) / 6 << endl;
#         }else {
#             break;
#         }
#     }

#     return 0;
# }