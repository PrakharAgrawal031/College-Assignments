def job_sequencing(jobs):
    # Sort the jobs in descending order of their profits
    jobs.sort(key=lambda x: x[2], reverse=True)

    max_deadline = max(jobs, key=lambda x: x[1])[1]
    schedule = [-1] * (max_deadline + 1)

    net_profit = 0
    for job in jobs:
        job_id, deadline, profit = job
        for d in range(deadline, 0, -1):
            if schedule[d] == -1:
                schedule[d] = job_id
                net_profit += profit
                break

    return schedule[1:], net_profit

jobs = [('a', 3, 100), ('b', 1, 19), ('c', 2, 27), ('d', 4, 25), ('e', 3, 15)]
schedule, profit = job_sequencing(jobs)
print("Scheduled Jobs:", schedule)
print("Total Profit:", profit)
