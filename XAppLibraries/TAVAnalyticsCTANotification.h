//
#ifndef TAVAnalyticsCTANotification_h
#define TAVAnalyticsCTANotification_h
@import Foundation;

@class NSObject;

@interface TAVAnalyticsCTANotification : NSObject

/* class methods */
+ (void)watchImpressionWithPlaylistItemKey:(id)key URL:(id)url;
+ (void)watchClickWithPlaylistItemKey:(id)key URL:(id)url;
+ (void)urlImpressionWithPlaylistItemKey:(id)key URL:(id)url;
+ (void)urlClickWithPlaylistItemKey:(id)key URL:(id)url;
+ (void)appOpenImpressionWithPlaylistItemKey:(id)key URL:(id)url appStoreID:(id)id;
+ (void)appOpenClickWithPlaylistItemKey:(id)key URL:(id)url appStoreID:(id)id;
+ (void)appInstallImpressionWithPlaylistItemKey:(id)key URL:(id)url appStoreID:(id)id;
+ (void)appInstallClickWithPlaylistItemKey:(id)key URL:(id)url appStoreID:(id)id;

@end

#endif /* TAVAnalyticsCTANotification_h */
