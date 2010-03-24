// stats.cs created with MonoDevelop
// User: lina at 4:04 PM 10/13/2009
//
// To change standard headers go to Edit->Preferences->Coding->Standard Headers
//

using System;

namespace PingPong
{
    class stats
    {

        public String name;
        public long average;
        public long min;
        public long max;
        public int count;

        public stats(String stats_name)
        {
            name = stats_name;
            this.init_stats();
        }

        public void add_stats(long data)
        {
            average = (count * average + data) / (count + 1);
            min = (count == 0 || data < min) ? data : min;
            max = (count == 0 || data > max) ? data : max;
            count++;
        }

        public void init_stats()
        {
            count = 0;
            average = 0L;
            min = 0L;
            max = 0L;
        }
    }
}