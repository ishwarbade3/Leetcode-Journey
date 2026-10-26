
public class Solution
{
    public int CountDaysTogether(string arriveAlice, string leaveAlice,
                                 string arriveBob, string leaveBob)
    {
        int[] days = { 31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31 };

        int start = Math.Max(ToDays(arriveAlice, days),
                            ToDays(arriveBob, days));

        int end = Math.Min(ToDays(leaveAlice, days),
                           ToDays(leaveBob, days));

        return Math.Max(0, end - start + 1);
    }

    private int ToDays(string date, int[] days)
    {
        int month = int.Parse(date.Substring(0, 2));
        int day = int.Parse(date.Substring(3, 2));

        for (int i = 0; i < month - 1; i++)
        {
            day += days[i];
        }

        return day;
    }
}

