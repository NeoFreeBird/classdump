//
#ifndef TAVMuteDetector_h
#define TAVMuteDetector_h
@import Foundation;

@class NSObject;

@interface TAVMuteDetector : NSObject

@property (readonly, nonatomic) _Bool silent;
@property (readonly, nonatomic) _Bool muted;

/* class methods */
+ (id)sharedDetector;

/* instance methods */
- (id)init;
- (void)setSilent:(_Bool)silent context:(unsigned long long)context;
- (void)volumeChanged:(id)changed;
- (_Bool)isSilent;
- (_Bool)isMuted;

@end

#endif /* TAVMuteDetector_h */
