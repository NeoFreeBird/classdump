//
#ifndef TFNTwitterUser_T1Sharing_h
#define TFNTwitterUser_T1Sharing_h
@import Foundation;

@interface TFNTwitterUser (T1Sharing) <T1ActivityModel>

/* instance methods */
- (id)plainTextSubject;
- (id)scribeParameterID;
- (id)twitterURLForShareWithSParam:(unsigned long long)sparam;

@end

#endif /* TFNTwitterUser_T1Sharing_h */
