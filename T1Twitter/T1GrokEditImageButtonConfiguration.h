//
#ifndef T1GrokEditImageButtonConfiguration_h
#define T1GrokEditImageButtonConfiguration_h
@import Foundation;

@class NSObject;

@interface T1GrokEditImageButtonConfiguration : NSObject // (Swift)

@property (nonatomic, readonly) _Bool showGrokLogo;
@property (nonatomic, readonly) _Bool showsButton;

/* class methods */
+ (id)configurationFor:(id)_for showsButton:(_Bool)button;

/* instance methods */
- (id)initWithShowGrokLogo:(_Bool)logo showsButton:(_Bool)button;
- (id)init;

@end

#endif /* T1GrokEditImageButtonConfiguration_h */
