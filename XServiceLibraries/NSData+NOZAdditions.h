//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_NOZAdditions_h
#define NSData_NOZAdditions_h
@import Foundation;

@interface NSData (NOZAdditions)

/* instance methods */
- (id)noz_dataByCompressing:(id)compressing compressionLevel:(float)level;
- (id)noz_dataByDecompressing:(id)decompressing;

@end

#endif /* NSData_NOZAdditions_h */
