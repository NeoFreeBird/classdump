//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterBroadcast_Cards_h
#define TFSTwitterBroadcast_Cards_h
@import Foundation;

@interface TFSTwitterBroadcast (Cards)

/* instance methods */
- (id)initWithCardContext:(id)context;
- (id)initWithCardData:(id)data;
- (id)_t1_broadcastIDForCardData:(id)data;

@end

#endif /* TFSTwitterBroadcast_Cards_h */
