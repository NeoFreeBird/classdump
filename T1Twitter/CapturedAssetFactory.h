//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CapturedAssetFactory_h
#define CapturedAssetFactory_h
@import Foundation;

@class NSObject;

@interface CapturedAssetFactory : NSObject

/* class methods */
+ (id)assetForVideoPath:(id)path account:(id)account sourceType:(unsigned long long)type;
+ (id)assetForEditorResult:(id)result sourceType:(unsigned long long)type;

@end

#endif /* CapturedAssetFactory_h */
