//
#ifndef TFSJetfuelAttachment_h
#define TFSJetfuelAttachment_h
@import Foundation;

@class NSObject, NSString;

@interface TFSJetfuelAttachment : NSObject // (Swift)

@property (nonatomic, readonly) NSString *payload;
@property (nonatomic, readonly) long long height;

/* instance methods */
- (id)init;

@end

#endif /* TFSJetfuelAttachment_h */
