#ifndef DONLIST_H
#define DONLIST_H

class DonationList
{
	private:
		int numDonations;
		double* donations;
		double** arrPtr;
		void selectionSort();
	
	public:
		DonationList(int num, double gift[]);
		~DonationList();
		void show();
		void showSorted();
};

#endif
