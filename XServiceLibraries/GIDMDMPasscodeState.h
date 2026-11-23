//
#ifndef GIDMDMPasscodeState_h
#define GIDMDMPasscodeState_h
@import Foundation;

@class NSObject, NSString;

@interface GIDMDMPasscodeState : NSObject

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *info;

/* class methods */
+ (id)passcodeState;

/* instance methods */
- (id)initWithStatus:(id)status info:(id)info;

@end

#endif /* GIDMDMPasscodeState_h */
