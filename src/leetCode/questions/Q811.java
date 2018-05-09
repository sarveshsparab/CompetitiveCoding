package leetCode.questions;

import common.Question;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class Q811 implements Question<List<String>> {
    @Override
    public List<String> solve(Object... args) {
        return subdomainVisits((String[])args);
    }

    public List<String> subdomainVisits(String[] cpdomains) {
        Map<String, Integer> ans = new HashMap<>();
        for(int i=0; i<cpdomains.length;i++){
            String[] cpd = cpdomains[i].split(" ");
            String domain = cpd[1];
            while(domain.indexOf('.')!=-1 || domain.length()>0){
                if(ans.containsKey(domain)){
                    ans.replace(domain,ans.get(domain)+Integer.valueOf(cpd[0]));
                }else{
                    ans.put(domain,Integer.valueOf(cpd[0]));
                }
                if(domain.indexOf('.')!=-1)
                    domain = domain.substring(domain.indexOf('.')+1);
                else
                    domain = "";
            }
        }
        return ans.entrySet().stream().map(x->x.getValue()+" "+x.getKey()).collect(Collectors.toList());
    }
}
