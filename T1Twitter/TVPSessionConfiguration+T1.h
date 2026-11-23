//
#ifndef TVPSessionConfiguration_T1_h
#define TVPSessionConfiguration_T1_h
@import Foundation;

@interface TVPSessionConfiguration (T1)

/* instance methods */
- (id)initWithAccountID:(id)id autoplaying:(_Bool)autoplaying;
- (id)initWithAccountID:(id)id autoplaying:(_Bool)autoplaying forceHighestQualityAudio:(_Bool)audio;
- (id)initWithAccountID:(id)id autoplaying:(_Bool)autoplaying allowDynamicAd:(_Bool)ad forceHighestQualityAudio:(_Bool)audio;
- (id)initWithAccountID:(id)id autoplaying:(_Bool)autoplaying adDisplayLocation:(id)location;
- (id)initWithAccountID:(id)id autoplaying:(_Bool)autoplaying allowDynamicAd:(_Bool)ad adDisplayLocation:(id)location forceHighestQualityAudio:(_Bool)audio outputViewFactory:(id)factory;

@end

#endif /* TVPSessionConfiguration_T1_h */
