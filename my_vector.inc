#if defined _my_vector_included
	#endinput
#endif
#define _my_vector_included

#include <vector>

/**
 * Compares two vectors.
 *
 * @param vec1		First vector.
 * @param vec2		Second vector.
 * @param mistake	Max mistake.
 * @return				Return true if vectors are different, false otherwise.
 */
stock bool:VectorsAreDifferent(const Float:vec1[3], const Float:vec2[3], const Float:mistake=0.0)
{
	if(mistake > 0.0)
	{
		new bool:dif = false, i;
		for(i=0; i<3; ++i)
		{
			if(vec1[i] > vec2[i])
			{
				if(vec1[i] - mistake > vec2[i]) {
					dif = true;
					break;
				}
			}
			else if(vec2[i] - mistake > vec1[i]) {
				dif = true;
				break;
			}
		}
		return dif;
	}
	return bool:(vec1[0] != vec2[0] || vec1[1] != vec2[1] || vec1[2] != vec2[2]);
}
