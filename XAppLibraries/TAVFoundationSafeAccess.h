//
#ifndef TAVFoundationSafeAccess_h
#define TAVFoundationSafeAccess_h
@import Foundation;

@class NSObject;

@interface TAVFoundationSafeAccess : NSObject

/* class methods */
+ (_Bool)isActive;
+ (void)setIsActive:(_Bool)active;
+ (_Bool)isPlaybackPollingReduced;
+ (void)setIsPlaybackPollingReduced:(_Bool)reduced;
+ (id)tav_delayedReadsQueue;
+ (void)submitWriteBlock:(id /* block */)block;
+ (void)submitReadBlock:(id /* block */)block;
+ (void)submitReadBlockOrExecuteInCurrentContextIfInactive:(id /* block */)inactive;

@end

#endif /* TAVFoundationSafeAccess_h */
