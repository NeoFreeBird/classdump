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
