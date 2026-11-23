//
#ifndef TAVToken_h
#define TAVToken_h
@import Foundation;

@class NSObject, NSString;

@interface TAVToken : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 notifyInvalidatedOrDestroyed;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic) _Bool isValid;

/* instance methods */
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

#endif /* TAVToken_h */
