#include<bits/stdc++.h>
using namespace std;

int findGoodPairs(string &a, string&b);

void test()
{
    string a, b;
    int ans;
    // 1 empty
    a = "", b = "abcd";
    ans = findGoodPairs(a, b);
    if (ans != 1)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // all empty
    a = "", b = "";
    ans = findGoodPairs(a, b);
    if (ans != 1)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // nothing same
    a = "abcd", b = "efgh";
    ans = findGoodPairs(a, b);
    if (ans != 1)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // one letter same
    a = "abcd", b = "ecg";
    ans = findGoodPairs(a, b);
    if (ans != 2)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // one word same
    a = "abecd", b = "kjecfgh";
    ans = findGoodPairs(a, b);
    if (ans != 4)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // nothing different
    a = "abcd", b = "abcd";
    ans = findGoodPairs(a, b);
    if (ans != 11)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // one letter different
    a = "abcd", b = "aecd";
    ans = findGoodPairs(a, b);
    if (ans != 5)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // one word different
    a = "abcd", b = "abfe";
    ans = findGoodPairs(a, b);
    if (ans != 4)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }
    // time limit
    a = "EkFjaqnfTVYpkuzuHituvKTipIkjAUYcnOmXsWRoPtGVPqTZMiePqTvCRfQzujsWoBiNmLzlIhdekWxFkOPAZOcyqsFEIxeSsMRiwNNGSGZsbJpzWyPLnSpavoyNJyKxmUkulBLPQqSPnzvvPmpmlXORceRjfPJsLfhMNNJPzIIbNAbtennjetrZyideWThGPndmdAbUKQkjURGBcQkfrZUURMKWvubmVAteBXBEWvcAdpSiIykdoWFzMlwbGJAniQvdkYDcfoSWTQJtnAvLkNaiMQvcaXeOtldrrqBckTgVnfNKcOlLHEENYyHWsJvzqvpMdJvrudIZdlQZUYeGaShvluEpzdhufkpbbayzkZoBwCQuDXasJIGGjsSJgpCeCqsadIwqjzmacTzQguyNXgcUJwWWWoxJvwVHKDTpeEJFbTMsMSUQNtVyPDKzirBtXnObiYRcaWxPCSvKSRBzfjDsesDCotgTiiSmTykXOEKvgtDKbdSAQSJZKLydbedOPJdDexytjbUcrSKoWWtMwTqrSplRMLwEetPEGmhzxRHtbwjUIOsvkuAEPJeyeGdIdoEzhkMVDZvzdIWlpLpMcZqxhrrfOWstxQQVzrjvaEwyRAHYgxeNLmAmPUCSbgVMZtAKtcyBxoOaunDpNKuwmUyuxHqVOSptraGBKpRfFrKfQZQYOUBKMIYTEcXhOzubLHzcwlMotpKspDXkoeHrOJizYvVKAPtomAoRYFLJisrueUFvmdsrTPoPMdYzIbrGsCDFBvKKXGOlmgEDScolYaGvdZsidGKuQQqwUGtLJjZVXcSpEHjORTMXasZJoIksbOvWYSpMMtauVjRllWpzVBDGMhnFkOvoEBYuHQwkniEHNxHSxCKhlkNqvAKSOLJZgQsmhnHkbqbCnviOveWTEdEZCxaMpPUtqfWsPTvQTTuZCAYnbqBEvbyoJBkeefKKzaEltZKUIHzFPEYWjTsndmJXxLuZRGqdLqhAugOMytJlBQGLZclpjzfBuTFmdgICBiFPbEOQYSsfpLSqByyWBVGUjuGWjxEQujwAjWljqJUxbxwCAvBqmYpyxfMAOKyllQORnxFCFqhgyCcNtlMFbBoMECiTPmibbdDwaddFttfYeTGRdbSaTzeWLgSGlaIHPmwlNmBYVzPlcXiTEqWaLmtLqsLylsgpeIDSQNpuyPzrczULddWlOuQhOyFPqeTZvqdaKdFZDNQhNRxAVgtTJAHGnaLtdwPavkrcgPdLRCDsgDrDXYzkLTbfAVfcehdhirTVpWBxkFqMkVrhIfgIVciQeCMPwpeGHCDFimdXrOjFGBOEgEYeXpJNQaywwkEZrRtQiLSgbuIPulCFqkjbAMwlPsetdnpuxdrFySWujoblzRhHSRdftJsCnAKOswwxSFUFlymLPwPROHeAhaXGFiveHunNsaQdpxrJhbjwtTYFiBxuLDDnBtjmLXBlGWbHbaGrnmQpXwtWcWNKHNugomWicWVpWiATcWAjRmouJHsTTnEMinJHTDCZWfpKDJftfIlLrTRukAsGgPVQgFGhKyORwfvASwMxpBRxsiWyEEJpGewRoczKgHNUPBNrOevyVXUGVymeQmoSuwNsiXPlVINbHhtaUvIhMpfTSXLiIrTjQOcmPCtkLDlebgefDXPiZIghuRkeudToXvdxPeXpXHJYrdjkEzspRmYTNpVKgbsLMopNRGQxsNdzkoiWDCEqkhfXUeypymTCqHeoWmoEUjtpKlyJfxpwxxKLfBvAZwmnqrdIZaPJHsJnsVTYcSMJMcrZRtAvQArInhfWDTZaSRxRXHxZfXujaUQSPqGKwCYhSTuuHEGNhMuzmEwaQgNDXNjlIoXtBPHkyAQYqeWnXseMmLcwezPMCBuQJYYTmqGwNIccoYhcxVuqDUKrKqzEMaYpGhmZAbDcETBhAiHIqELbgnsTwEUNtHpNujrfCKtxhOhFfgRLfojAdJTLXCAMwlcAhLpdZogXwVPa";
    b = "PweUNGeLWFczfBzVxEvgOmviViUjaawmaYkqfQLCLxcAqcpzGOxjLEjZOQhfkaHpnafdtYtAtXrFGiPlNFcwPgxbDhcmFWupacPVKiJIAdgpYZlgfgjSOeqwwtttSaptUvcLiubTWKcZLofQjxTOdufuKgeAtmoGkvGzVUXoZOvwITwItnsvnVTQsXKqhimTvBAEcgFwQINDiSKQeeCrNBNovUEAfmkpzzXnuPMaoOiJBtXesypDpDQLRRJhdyqnWfjwTHZrsXdPxJwPGLwVRwZYAwZiaOUrUvkBsSkWUbAFXAYaNJVBZSgXEDsiDjaejRSVwyVAMbByuvVNTQiKHvdyvAJqCbrOZDsufZEJFdtHWHJwbEjhxqLPTxFOGfwfprkRKeQQqGcLQatkhVmuaKEmPZZVvYVIYYQpckaOwqdzbeRRaEeAPRysMMinqAuCRypLxJCaFeSOzpNiBHinvyeZVOnNWVfVMZKiywMlfIRFdtNkrsToahDMqTnbzuEcuZBHBNUmGyTIYcwiitpTBOLpTLRAFugHhWEpVsWSsKHSEArpIgkLyJMuhuutlHUnbEZRTZtpDWHoaYikoDvJQWcMzEuqXcoQgbxXBsWKORGJNUVQzMsIcpVeapJKBFkBnjjCqBNZeCXexYsRUOVdYiImUBXFpCPDIxKvSZOwCXbyOYuKPpnkXxkgoxXgqjnBLrVZyWUomriKdMxjtFmAFzXpjjjLpkqQJuyFdpJsnyPhRQPydFVhriDNLJhtwtdEFPjmIHniAIkMvsxILwWIwglDzJmfxSUETsghJiXSNZnfhVicXXnxgTJgDRdwgwetwnvSqcJtWBxRmtAwqLFLUtjLDzQFoJZernbYbHIvIsGfbFRgfgEnHwOpwdJSlqzAIPzDyFOfSbSwuKqJiaAtBqYtOOVyXIRicBkApFhtgcNtCWDHsmAsPyTobGQOPaTlBQqXbLmPPoGpHbINsOCUgoomZxmdofNUOwZMZexfyEaZqDRojfsKMADyPfvLKFmwIlwdKYaNNuJNBwVjrCXarivNmcWyFLnpBnMdyQUWZUvkfBlPuRSDKyaapMocackuoCWqBGxNpALSRyBPbOjSAwWWEPJBpOtomeIEcbDzZkjFtrdcHEsyKMgYfZleMIOCZUiFmhzQCTlGuctqFjfgziolbuAThiHhTmWyglNbHxqcthEQxeGIPuWAHntTHATMcNeGETIBMqSpRSUKwTRpSBRiPOeGrqjQeeceQIJZJidRmrzONtOfhRqLAJBmbobobXCRMyNcrtmJYYGtAEYMbMVKNOLwtHDhbGVFSruOJPDJslgKVIOFQQqMmXzjBtjLshgmopxiwMekFXjzVOlNNXtkYqPpebetEmhduSlQDkUjLcBwLIFhZbKXyllewOhIjoKGeIARGPYJfJnCgXZkEmkFEfGXzMQrPfQYOtsthZkTMfNNaDrYKfwtKUCoADTHiSbslgGbRDGkKUjEbFNloemntkFgmtuonLntARaclLLBKORsnvYEiTGcxvvoVEdhPRPsmYwEJnHePIGYYnctmuIYQxrTZHTihYJEPdreGRyuJuPhgXxvmPnikaGmDlxAhUXykUEmnTwthzkabtrndyYvIGUUWYTXrumCXhEdYkIsSpRQnsVgvTfWEphCrjlCYIajWcMjaHcXEryfqrofFCQkVLNgNeqGDXySBVTfouyaDJaiHIwQqvbJatPJoRQGAYUivZUiaEKbMbblnWdCjHvUQBwuUoZncluwIiyXoZWFiNraxNLxCwuhlRJKuketuDpzgqybLVtOqsvOJtJXFgmtrTnyNvPbyjBMMjAJCEejKiSYPKYRUtMQNNplOifqJsZvrfsTCOCnkYemYgoWtZPdwJGkXNsJWlTLtEmWiTpasXNcbslfyWhNXVVreNEVhMJYDghsygLyhZUHhcvLjGEMeYXBTcUBfIIQHuXVOrDRGwfTYVCkCcxhyukGEsoKbNoUUxuETlTzKWqr";
    ans = findGoodPairs(a, b);
    if (ans != 78629)
    {
        cout << ans << endl;
        cout << "Wrong Output" << endl;
        return;
    }

    cout << "All test cases passed." << endl;
}

int main(){
    test();
}