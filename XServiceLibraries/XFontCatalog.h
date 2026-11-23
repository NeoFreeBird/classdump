//
#ifndef XFontCatalog_h
#define XFontCatalog_h
@import Foundation;

@class NSObject;

@interface XFontCatalog : NSObject

/* class methods */
+ (id)fontForToken:(long long)token;
+ (id)customFontOfSize:(double)size weight:(long long)weight scalesWithDynamicType:(_Bool)type;
+ (id)spoofingResistantUsernameFontForToken:(long long)token;
+ (id)monospaceFixedFontOfSize:(double)size;
+ (id)contentFontWithOffset:(double)offset weight:(long long)weight;
+ (id)tabularDigitsFontOfSize:(double)size weight:(double)weight;
+ (void)resetCachedFonts;

@end

#endif /* XFontCatalog_h */
