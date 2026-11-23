//
#ifndef NSInputStream_TFSAdditions_h
#define NSInputStream_TFSAdditions_h
@import Foundation;

@interface NSInputStream (TFSAdditions)

/* class methods */
+ (id)noz_compressedInputStream:(id)stream withEncoder:(id)encoder compressionLevel:(float)level;

/* instance methods */
- (id)tfs_readData;

@end

#endif /* NSInputStream_TFSAdditions_h */
