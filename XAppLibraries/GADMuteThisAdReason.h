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
