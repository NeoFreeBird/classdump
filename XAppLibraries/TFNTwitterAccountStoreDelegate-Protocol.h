//
#ifndef TFNTwitterAccountStoreDelegate_Protocol_h
#define TFNTwitterAccountStoreDelegate_Protocol_h
@import Foundation;

@protocol TFNTwitterAccountStoreDelegate

@required

/* required instance methods */
- (void)didLoadAccountsDictionary:(id)dictionary;
- (void)willSaveAccountsDictionary:(id)dictionary forGroupUserDefaults:(_Bool)defaults;

@optional

@end

#endif /* TFNTwitterAccountStoreDelegate_Protocol_h */
