//
// Created by Zane Dunnings on 4/2/18.
//
/***
 * Class to represent each website in the ranking engine
 */
#ifndef EECS398_SEARCH_SITE_H
#define EECS398_SEARCH_SITE_H

class Site
	{
public:

	double getScore();
	string url;
	double score;
	bool hasBeenScored;
	};
#endif //EECS398_SEARCH_SITE_H