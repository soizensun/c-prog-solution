class MusicPlaylist
{

friend ostream &operator<<(ostream &stream,MusicPlaylist &obj);

private:
  int now;
  int max;
  string musicName[20];

public:
  MusicPlaylist()
  {
    now = 1;
    max = 0;
  }
  void add(string str)
  {
    musicName[max] = str;
    max++;
  }
  void setCurrentTrack(int n)
  {
    if(n<0)
      now = max + (n%max);
    else if(n%max > 0)
      now = n%max;
    else
      now = max;
  }
  string toString()
  {
    return "play track " + to_string(now) + " (" + musicName[now-1] + ")";
  }
  MusicPlaylist &operator<<(const string& str)
  {
    add(str);
    return *this;
  }
  string operator++()
  {
    setCurrentTrack(now+1);
    return toString();
  }
  string operator++(int)
  {
    string tmp = toString();
    setCurrentTrack(now+1);
    return tmp;
  }
  string operator--()
  {
    setCurrentTrack(now-1);
    return toString();
  }
  string operator--(int)
  {
    string tmp = toString();
    setCurrentTrack(now-1);
    return tmp;
  }
  void operator+=(int n)
  {
    setCurrentTrack(now+n);
  }
  void operator-=(int n)
  {
    setCurrentTrack(now-n);
  }
};

ostream &operator<<(ostream &stream,MusicPlaylist &obj)
  {
    stream << obj.toString();
    return stream;
  }
