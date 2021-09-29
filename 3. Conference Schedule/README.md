# 3. Conference Schedule

A schedule has just been released for an upcoming tech conference. The schedule provides the start and end times of each of the presentations. Once a presentation has begun, no one can
enter or leave the room. It takes no time to go from one presentation to another. Determine the
maximum number of presentations that can be attended by one person.
Example
n=3
scheduleStart = [1, 1, 2]
scheduleEnd = [3, 2, 4]
Using 0-based indexing, an attendee could attend any presentation alone, or both presentations 7
and 2. Presentation 0 ends too late to be able to attend presentation 2 afterwards. The maximum
number of presentations one person can attend is 2.
Function Description
Complete the function maxPresentations in the editor below.
maxPresentations has the following parameter(s):
scheduleStart[n]: the start times of presentation /
scheduleEnd[n]: the end times of presentation /
Returns:
int: the maximum number of presentations that can be attended by one person
Constraints
¢ 1<n<10°
© 1< scheduleStart[i], scheduleEnd{i] < 10?
> Input Format For Custom Testing
v Sample Case 0
Sample Input
STDIN Function
