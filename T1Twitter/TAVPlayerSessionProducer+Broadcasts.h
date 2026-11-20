//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerSessionProducer_Broadcasts_h
#define TAVPlayerSessionProducer_Broadcasts_h
@import Foundation;

@interface TAVPlayerSessionProducer (Broadcasts)

/* class methods */
+ (id)playerSessionProducerWithBroadcast:(id)broadcast cardDataSource:(id)source;

@end

#endif /* TAVPlayerSessionProducer_Broadcasts_h */
