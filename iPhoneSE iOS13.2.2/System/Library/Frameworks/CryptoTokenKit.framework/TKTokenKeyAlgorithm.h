/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject {

	NSArray* _algorithms;

}
-(id)initWithAlgorithmsArray:(id)arg1 ;
-(BOOL)isAlgorithm:(CFStringRef)arg1 ;
-(BOOL)supportsAlgorithm:(CFStringRef)arg1 ;
@end
