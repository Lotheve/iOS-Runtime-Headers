/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary;

@interface NMRProtobufSerialization : NSObject {
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dictionaryValueToProtobufValueTransformer;

    Class _protobufClass;
    NSDictionary *_protobufKeyToDictionaryKeyMapping;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _protobufValueToDictionaryValueTransformer;

}

@property(copy) NSDictionary * dictionaryKeyToProtobufKeyMapping;
@property(copy) id dictionaryValueToProtobufValueTransformer;
@property(retain) Class protobufClass;
@property(copy) id protobufValueToDictionaryValueTransformer;

- (void).cxx_destruct;
- (id)dictionaryFromProtobuf:(id)arg1;
- (id)dictionaryFromProtobufData:(id)arg1;
- (id)dictionaryKeyToProtobufKeyMapping;
- (id)dictionaryValueToProtobufValueTransformer;
- (Class)protobufClass;
- (id)protobufDataFromDictionary:(id)arg1;
- (id)protobufFromDictionary:(id)arg1;
- (id)protobufValueToDictionaryValueTransformer;
- (void)setDictionaryKeyToProtobufKeyMapping:(id)arg1;
- (void)setDictionaryValueToProtobufValueTransformer:(id)arg1;
- (void)setProtobufClass:(Class)arg1;
- (void)setProtobufValueToDictionaryValueTransformer:(id)arg1;

@end