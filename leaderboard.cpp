// handles the score system and the leaderboard elements
class leaderboard
{
    // data structure for scores with initials, consider using an enumeration of structs to hold position
    struct score_entry { string initials; int score; };
    
    // vector to hold scores in position
    vector<score_entry> scores[6];
    
    // return high scores 
    vector<score_entry> get_high_scores() { return scores; }
    
    ofstream ost {"scores.txt"};
    string initials;
    int score;
    while(ist >> initials >> score)
    {
        scores.push_back(score_entry{name,score});
    }
    ost.close();
    
    ifstream ist {"scores.txt"};
  
    // add a new high score
    void write_high_score(vector<score_entry> high_scores) { scores.push_back(score_entry); }
    
    // returns initals of certain score
    string get_initials() { return score_entry.initials; }
    
    // sets initials of certain score
    void write_high_score() { return; }
};






