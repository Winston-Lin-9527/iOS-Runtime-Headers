/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WspPropertyProtocol.h>

@class cdbProp, cbaseVariant;

@interface genParseTreeProp : NSObject <WspPropertyProtocol> {

	cdbProp* _cProps;
	cbaseVariant* _variant;

}

@property (retain) cdbProp * cProps;                    //@synthesize cProps=_cProps - In the implementation block
@property (retain) cbaseVariant * variant;              //@synthesize variant=_variant - In the implementation block
-(id)initWithBool:(BOOL)arg1 ;
-(cbaseVariant *)variant;
-(void)setVariant:(cbaseVariant *)arg1 ;
-(unsigned)propertyID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(cdbProp *)cProps;
-(void)setCProps:(cdbProp *)arg1 ;
@end
