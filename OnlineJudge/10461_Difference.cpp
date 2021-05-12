#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int jobNumbers, sumJobTimes;

int getMinJobTime(int queryJob, vector <int> jobTime, vector<vector<int> > beforeDependencies) {
	int minJobTime = -jobTime[queryJob];
	queue<int> minJobTimes;
	vector<bool> visitedJobs(jobNumbers, false);

	minJobTimes.push(queryJob);
	visitedJobs[queryJob] = true;

	while (!minJobTimes.empty()) {
		int currentJob = minJobTimes.front();
		minJobTimes.pop();
		minJobTime += jobTime[currentJob];

		for (int i = 0; i < beforeDependencies[currentJob].size(); i++) {
			int nextJob = beforeDependencies[currentJob][i];
			if (!visitedJobs[nextJob]) {
				minJobTimes.push(nextJob);
				visitedJobs[nextJob] = true;
			}
		}
	}
	return minJobTime;
}

int getMaxJobTime(int queryJob, vector<int> jobTime,
		vector<vector<int> > afterDependencies) {
	int maxJobTime = sumJobTimes;
	queue<int> maxJobTimes;
	vector<bool> visitedJobs(jobNumbers, false);

	maxJobTimes.push(queryJob);
	visitedJobs[queryJob] = true;

	while (!maxJobTimes.empty()) {
		int currentJob = maxJobTimes.front();
		maxJobTimes.pop();
		maxJobTime -= jobTime[currentJob];

		for (int i = 0; i < afterDependencies[currentJob].size(); i++) {
			int nextJob = afterDependencies[currentJob][i];
			if (!visitedJobs[nextJob]) {
				maxJobTimes.push(nextJob);
				visitedJobs[nextJob] = true;
			}
		}
	}
	return maxJobTime;
}

int main() {

	int caseNumber = 1, dependecyNumbers, jobX, jobY, queryNumbers, queryJob;

	cin >> jobNumbers >> dependecyNumbers;

	while (jobNumbers != 0 || dependecyNumbers != 0) {

		sumJobTimes = 0;
		vector<int> jobTime(jobNumbers);
		vector<vector<int> > beforeDependencies(jobNumbers);
		vector<vector<int> > AfterDependencies(jobNumbers);

		for (int i = 0; i < jobNumbers; i++) {
			cin >> jobTime[i];
			sumJobTimes += jobTime[i];
		}

		while (dependecyNumbers--) {
			cin >> jobX >> jobY;
			jobX--, jobY--;

			beforeDependencies[jobX].push_back(jobY);
			AfterDependencies[jobY].push_back(jobX);
		}
		cin >> queryNumbers;

		cout << "Case #" << caseNumber++ << ":" <<endl;
		while (queryNumbers--) {
			cin >> queryJob;
			queryJob--;

			cout<< getMaxJobTime(queryJob, jobTime, AfterDependencies)
							- getMinJobTime(queryJob, jobTime,
									beforeDependencies) << endl;
		}

		cout<<endl;
		cin >> jobNumbers >> dependecyNumbers;
	}
	return 0;
}