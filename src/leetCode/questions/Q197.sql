select w1.Id Id from Weather w1, Weather w2 where datediff(w1.RecordDate,w2.RecordDate)=1 and w1.Temperature>w2.Temperature