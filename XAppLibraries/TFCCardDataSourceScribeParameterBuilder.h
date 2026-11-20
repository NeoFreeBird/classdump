//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCCardDataSourceScribeParameterBuilder_h
#define TFCCardDataSourceScribeParameterBuilder_h
@import Foundation;

@class NSObject;

@interface TFCCardDataSourceScribeParameterBuilder : NSObject

/* class methods */
+ (id)scribeParametersForCardDataSource:(id)source parameters:(id)parameters scribeItem:(id)item withLogEvent:(id)event;
+ (id)_updatedScribeParameters:(id)parameters cardData:(id)data cardEvent:(id)event scribeItem:(id)item extraCardEventParameters:(id)parameters addCardEventDataIfNotFound:(_Bool)found;

@end

#endif /* TFCCardDataSourceScribeParameterBuilder_h */
