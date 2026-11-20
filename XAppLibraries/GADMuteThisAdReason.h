//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMuteThisAdReason_h
#define GADMuteThisAdReason_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface GADMuteThisAdReason : NSObject

@property (readonly, nonatomic) NSURL *muteThisAdURL;
@property (readonly, nonatomic) NSString *reasonDescription;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* GADMuteThisAdReason_h */
