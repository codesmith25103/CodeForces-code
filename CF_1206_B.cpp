#include <iostream>
#include <vector>

using namespace std;

int udp_network_protocol(vector<vector<int>> requests, int max_packets, int rate) {
  int dropped_packets = 0;
  vector<int> packets_in_queue;
  int front_ptr = 0;
  int back_ptr = 0;

  for (int i = 0; i < requests.size(); i++) {
    // Add the new packets to the queue.
    int num_packets = requests[i][1];
    while (packets_in_queue.size() < max_packets && num_packets > 0) {
      packets_in_queue.push_back(1);
      back_ptr++;
      num_packets--;
    }

    // Remove the oldest packets from the queue.
    while (packets_in_queue.size() > max_packets) {
      front_ptr++;
    }

    // Deliver the packets to the client.
    for (int j = 0; j < rate && front_ptr < back_ptr; j++) {
      front_ptr++;
    }

    // Count the number of dropped packets.
    dropped_packets = packets_in_queue.size() - (back_ptr - front_ptr);
  }

  // Return the number of dropped packets.
  return dropped_packets;
}

int main() {
  vector<vector<int>> requests = {{1, 8}, {4, 9}, {6, 7}};
  int max_packets = 10;
  int rate = 2;

  int dropped_packets = udp_network_protocol(requests, max_packets, rate);

  cout << "The total number of dropped packets is: " << dropped_packets << endl;

  return 0;
}
