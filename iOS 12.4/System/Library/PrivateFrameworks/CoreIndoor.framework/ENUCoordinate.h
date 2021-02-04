/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ENUCoordinate : NSObject {

	double _east;
	double _north;
	double _up;

}

@property (assign,nonatomic) double east;               //@synthesize east=_east - In the implementation block
@property (assign,nonatomic) double north;              //@synthesize north=_north - In the implementation block
@property (assign,nonatomic) double up;                 //@synthesize up=_up - In the implementation block
+(id)fromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3 ;
-(double)east;
-(double)north;
-(id)initWithEast:(double)arg1 north:(double)arg2 up:(double)arg3 ;
-(void)setEast:(double)arg1 ;
-(void)setNorth:(double)arg1 ;
-(void)setUp:(double)arg1 ;
-(double)up;
-(id)init;
@end
