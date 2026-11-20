//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesTrayContent_Protocol_h
#define TASSpacesTrayContent_Protocol_h
@import Foundation;

@class NSString;

@protocol TASSpacesTrayContent

@required

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) _Bool spacesTrayPrimaryActionEnabled;
@property (nonatomic, readonly) _Bool spacesTrayPrimaryActionIsDestructive;
@property (nonatomic, readonly) NSString *spacesTraySecondaryActionTitle;
@property (nonatomic, readonly) _Bool spacesTraySecondaryActionIsDestructive;

@optional

/* optional instance methods */
- (void)spacesTrayDidPressPrimaryAction;
- (void)spacesTrayDidPressSecondaryAction;

@end

#endif /* TASSpacesTrayContent_Protocol_h */
