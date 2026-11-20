//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
