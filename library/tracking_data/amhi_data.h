/*ckwg +5
 * Copyright 2010-2012 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

/**
\file
\brief
 Method and field definitions of Aligned Motion History Image(AMHI) data.
*/

#ifndef INCL_AMHI_DATA_H
#define INCL_AMHI_DATA_H

#include <vgl/vgl_box_2d.h>

#include <vil/vil_image_resource.h>
#include <vil/vil_image_view.h>

namespace vidtk
{
///Aligned Motion History Image(AMHI) data.
struct amhi_data{
  ///Constructor
  amhi_data() :
    ///Ghost count.
    ghost_count( 0 ),
    ///Weight.
    weight(),
    ///Image
    image(NULL),
    ///Bounding box.
    bbox()
  {
  }

  ///Ghost count.
  unsigned ghost_count;

  ///Image weights of type float.
  vil_image_view<float> weight;

  ///Image of data of the type of the input images.
  vil_image_resource_sptr image;

  ///A Cartesian 2D bounding box.
  vgl_box_2d<unsigned> bbox;

  void deep_copy( amhi_data const & rhs );
};

} //namespace vidtk

#endif
