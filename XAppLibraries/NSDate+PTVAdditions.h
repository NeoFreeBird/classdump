//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSDate_PTVAdditions_h
#define NSDate_PTVAdditions_h
@import Foundation;

@interface NSDate (PTVAdditions)

/* class methods */
+ (id)ocf_dateWithJSONDictionary:(id)jsondictionary error:(id *)error;
+ (id)tav_ntpEpoch;
+ (id)synchronizedNow;

/* instance methods */
- (id)ocf_dictionaryValue;
- (double)timeIntervalSinceSynchronizedNow;
- (_Bool)isNowOrIsInThePast;
- (_Bool)isInTheFuture;
- (_Bool)isEarlierThanDate:(id)date;
- (_Bool)isLaterThanDate:(id)date;
- (unsigned long long)millisecondsSince1970;

@end

#endif /* NSDate_PTVAdditions_h */
