//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
