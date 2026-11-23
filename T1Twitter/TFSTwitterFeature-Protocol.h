//
#ifndef TFSTwitterFeature_Protocol_h
#define TFSTwitterFeature_Protocol_h
@import Foundation;

@class NSString;

@protocol TFSTwitterFeature

@required

@property (nonatomic, readonly) NSString *identifier;

/* required instance methods */
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;

@optional

@end

#endif /* TFSTwitterFeature_Protocol_h */
