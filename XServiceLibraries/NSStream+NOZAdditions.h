//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSStream_NOZAdditions_h
#define NSStream_NOZAdditions_h
@import Foundation;

@interface NSStream (NOZAdditions)

/* class methods */
+ (void)noz_createBoundInputStream:(id *)stream outputStream:(id *)stream bufferSize:(unsigned long long)size;

@end

#endif /* NSStream_NOZAdditions_h */
