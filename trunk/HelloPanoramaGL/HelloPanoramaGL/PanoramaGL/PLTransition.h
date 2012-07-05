/*
 * PanoramaGL library
 * Version 0.1
 * Copyright (c) 2010 Javier Baez <javbaezga@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "PLObjectBase.h"
#import "PLScene.h"
#import "PLTransitionDelegate.h"

@class PLViewBase;

@interface PLTransition : PLObjectBase
{
	/**member variables*/
@private
	NSTimer *timer;
	NSTimeInterval interval;
	PLTransitionType type;
	NSUInteger progressPercentage;
	
	PLViewBase *view;
	NSObject<PLIScene> *scene;
	
	BOOL isRunning;
	
	NSObject<PLTransitionDelegate> *delegate;
}

/**properties*/

@property(nonatomic, assign) NSTimeInterval interval;
@property(nonatomic, readonly) NSUInteger progressPercentage;
@property(nonatomic, readonly) PLTransitionType type;
@property(nonatomic, assign) NSObject<PLTransitionDelegate> *delegate;

/**init methods*/

-(id)initWithInterval:(NSTimeInterval)interval type:(PLTransitionType)type;

/**transition methods*/

-(BOOL)executeWithView:(PLViewBase *)view scene:(NSObject<PLIScene> *)scene;
-(void)stop;

@end
