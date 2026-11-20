//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore22SearchPlaceNameAdapter_h
#define _TtC14TFSTwitterCore22SearchPlaceNameAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.SearchPlaceNameAdapter : NSObject // (Swift)

/* class methods */
+ (id)searchPlacesWithPlaceName:(id)name latitude:(id)latitude longitude:(id)longitude maxPlaces:(id)places with:(id)with completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore22SearchPlaceNameAdapter_h */
